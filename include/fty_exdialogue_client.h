/*  =========================================================================
    fty_exdialogue_client - Actor Client

    Copyright (C) 2014 - 2017 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
    =========================================================================
*/

#ifndef FTY_EXDIALOGUE_CLIENT_H_INCLUDED
#define FTY_EXDIALOGUE_CLIENT_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  This is the actor constructor as zactor_fn
FTY_EXDIALOGUE_EXPORT void
    fty_exdialogue_client (zsock_t *pipe, void* args);

//  Self test of this class
FTY_EXDIALOGUE_EXPORT void
    fty_exdialogue_client_test (bool verbose);

/*
//  @interface
//  Create a new fty_exdialogue_client

FTY_EXDIALOGUE_EXPORT fty_exdialogue_client_t *
    fty_exdialogue_client_new (void);

//  Destroy the fty_exdialogue_client
FTY_EXDIALOGUE_EXPORT void
    fty_exdialogue_client_destroy (fty_exdialogue_client_t **self_p);

//  Self test of this class
FTY_EXDIALOGUE_EXPORT void
    fty_exdialogue_client_test (bool verbose); 
*/
//  @end

#ifdef __cplusplus
}
#endif

#endif
