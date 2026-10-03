
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000028d0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_INSTANCE_WORK_ID_FLAG_ONE_WINGED_ACTIVATED);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator-(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      bVar4 = true;
      goto LAB_7100002a28;
    }
  }
  bVar4 = false;
LAB_7100002a28:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

