#ifndef _TSISTEMA_H_
#define _TSISTEMA_H_

#include "tFila.h"
#include "tDocumento.h"
#include "tDadosPessoais.h"
#include "tMedico.h"
#include "tSecretario.h"
#include "tListaBusca.h"
#include "tConsulta.h"
#include "tRelatorio.h"

#include "tUsuario.h"
#include "tDatabase.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct tSistema tSistema;


/// @brief Aloca memoria dinamicamente para o sistema
/// @param path caminho do diretorios dos arquivos .txt
/// @return retorna ponteiro para estrutura tSistema
tSistema* CriaSistema (char* path);

/// @brief Acessa sistema com base nas credenciais fornecidas pela entrada padrao
/// @param  sistema
/// @return retorna true se o login foi realizado com sucesso, senao retorna false
bool AcessaSistemaUsuario (tSistema* s);


/// @brief Inicia o sistema, disponibilizando acoes para o usuario
/// @param  s
void ExecutaSistema (tSistema* s);


/// @brief Obtem usuario que esta logado no sistema
/// @param s 
/// @return usuario
tUsuario* ObtemUsuario (tSistema* s);


/// @brief 
/// @param s 
/// @return 
tDatabase* ObtemBDSistema (tSistema* s);

void ExecutaFiladeImpressao (tSistema* s);

void ExecutaRelatorio (tSistema* s);

tFila* ObtemFilaImprSistema (tSistema* s);

char* ObtemPathImprDocs (tSistema* s);


/// @brief 
/// @param  
void DesalocaSistema (tSistema*);



#endif