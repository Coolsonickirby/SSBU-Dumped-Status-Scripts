
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100147830(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_STICK_Y_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x1b3778ea3e);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  uVar2 = lib::L2CValue::operator<=(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,(uVar2 & 1) != 0);
  return;
}

