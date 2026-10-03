
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000163e0(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ATTACK);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    FUN_7100016510(param_2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_BURNER_FLAG_PUSH_B_BUTTON);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1)
    ;
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  FUN_7100016710(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  FUN_7100017550(param_2);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

