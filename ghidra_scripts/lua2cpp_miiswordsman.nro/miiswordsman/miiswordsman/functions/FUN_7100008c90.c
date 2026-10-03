
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008c90(L2CAgentBase *param_1,L2CValue *param_2)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_1);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_2);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) goto LAB_7100008d90;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_N_3);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_1);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_2);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_3);
          uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar1 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_1);
            uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar1 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_2);
              uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar1 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_3);
                uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar1 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_1);
                  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  if ((uVar1 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_2);
                    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                    lib::L2CValue::~L2CValue(aLStack64);
                    if ((uVar1 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_3);
                      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
                      lib::L2CValue::~L2CValue(aLStack64);
                      if ((uVar1 & 1) == 0) goto LAB_7100008d90;
                      lib::L2CValue::L2CValue
                                (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW3_END);
                      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                      lua2cpp::L2CAgentBase::sv_set_status_func
                                (param_1,aLStack64,aLStack80,FUN_7100013b70);
                      lib::L2CValue::~L2CValue(aLStack80);
                      lib::L2CValue::~L2CValue(aLStack64);
                      lib::L2CValue::L2CValue
                                (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW3_END);
                      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                      lua2cpp::L2CAgentBase::sv_set_status_func
                                (param_1,aLStack64,aLStack80,FUN_71000142e0);
                    }
                    else {
                      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                      lua2cpp::L2CAgentBase::sv_set_status_func
                                (param_1,aLStack64,aLStack80,FUN_7100012860);
                      lib::L2CValue::~L2CValue(aLStack80);
                      lib::L2CValue::~L2CValue(aLStack64);
                      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                      lua2cpp::L2CAgentBase::sv_set_status_func
                                (param_1,aLStack64,aLStack80,FUN_7100013040);
                      lib::L2CValue::~L2CValue(aLStack80);
                      lib::L2CValue::~L2CValue(aLStack64);
                      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
                      lua2cpp::L2CAgentBase::sv_set_status_func
                                (param_1,aLStack64,aLStack80,FUN_7100013b60);
                    }
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100010d30);
                    lib::L2CValue::~L2CValue(aLStack80);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100011c90);
                    lib::L2CValue::~L2CValue(aLStack80);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100012700);
                    lib::L2CValue::~L2CValue(aLStack80);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue
                              (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW1_HIT);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100010d30);
                    lib::L2CValue::~L2CValue(aLStack80);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue
                              (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW1_HIT);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100011c90);
                    lib::L2CValue::~L2CValue(aLStack80);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue
                              (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW1_HIT);
                    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
                    lua2cpp::L2CAgentBase::sv_set_status_func
                              (param_1,aLStack64,aLStack80,FUN_7100012700);
                  }
                }
                else {
                  lib::L2CValue::L2CValue
                            (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI3_END);
                  lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                  lua2cpp::L2CAgentBase::sv_set_status_func
                            (param_1,aLStack64,aLStack80,FUN_71000109c0);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_7100010990);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109a0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
                lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109b0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_7100010990);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109a0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH);
                lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109b0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH_END);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_7100010990);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH_END);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109a0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_RUSH_END);
                lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109b0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_BOUND);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_7100010990);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_BOUND);
                lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109a0);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack64);
                lib::L2CValue::L2CValue
                          (aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI2_BOUND);
                lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_EXEC_STOP);
                lua2cpp::L2CAgentBase::sv_set_status_func
                          (param_1,aLStack64,aLStack80,FUN_71000109b0);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000f4b0);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000fac0);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000fad0);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_JUMP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000fc00);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_JUMP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_71000100b0);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_JUMP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010590);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_LOOP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010710);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_LOOP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010720);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_LOOP);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010730);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_END);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010860);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_END);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010970);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_HI1_END);
              lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
              lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_7100010980);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
            lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
            lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000f0c0);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000d9a0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000e3c0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000ef50);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_HOLD);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000d9a0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_HOLD);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000e3c0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_HOLD);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000ef50);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_DASH);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000d9a0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_DASH);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000e3c0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_DASH);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000ef50);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_ATTACK);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000d9a0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_ATTACK);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000e3c0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_ATTACK);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000ef50);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_END);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000d9a0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_END);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000e3c0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_END);
          lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXIT_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000ef50);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
        lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
        lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000bc80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S1_ATTACK);
        lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
        lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000c620);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S1_END);
        lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
        lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000cde0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
      lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000a310);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
      lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
      lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000b080);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000a030);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
    lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
    lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_710000a140);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100008d90:
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL._4_4_);
  lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func(param_1,aLStack64,aLStack80,FUN_71000145c0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

