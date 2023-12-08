#ifndef _TUSUARIOSISTEMA_H_
#define _TUSUARIOSISTEMA_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tUsuarioSistema tUsuarioSistema;
typedef void (*telaImpressao)(void);
typedef void (*DesalocaUsuario)(void *);


typedef enum {
    MED, // Medico
    S_ADMIN, // Secretario ADM
    S_USER, // Secreatario USER
} userType;


/// @brief Cria novo usuario que ira utilizar o sistema
/// @param user ponteiro generico para o usuario
/// @param telaImpr tela de impressao do menu principal
/// @param desalocaUser desaloca memoria da estrutura do usuario
/// @param tipoUsuario tipo de usuario (medico ou secretario)
/// @return retorna usuario alocado
tUsuarioSistema* CriaUsuarioSistema (void* user, telaImpressao telaImpr, DesalocaUsuario desalocaUser, userType tipoUsuario);


/// @brief Desaloca memoria de um usuario 
/// @param  usuario
void DesalocaUsuarioSistema (tUsuarioSistema*);


/// @brief Obtem o tipo de usuario que esta utilizando o sistema
/// @param  usuario 
/// @return tipo do usuario
userType ObtemTipoUsuarioSistema(tUsuarioSistema*);


/// @brief Imprime o menu principal baseado no tipo de usuario
/// @param  Usuario
void ImprimeMenuPrincipalUsuario (tUsuarioSistema*);

void* ObtemUsuarioSistema (tUsuarioSistema*);

bool UsuarioEscolheuOpcaoValida (tUsuarioSistema*, int);

#endif