
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001fba80(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_looped_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      FUN_71001fd4d0(param_2);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xe946909a7);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack96,0xe946909a7);
      uVar5 = lib::L2CValue::as_integer(aLStack80);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

