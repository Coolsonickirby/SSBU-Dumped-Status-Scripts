
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016000(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_WORK_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x13501eaca7);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      bVar2 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::GroundModule__set_passable_check_impl
                (param_2->moduleAccessor,(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x1b7adbe7e3);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
      lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(param_2,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_WORK_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_WORK_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,2);
    uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_710001627c;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PALUTENA_STATUS_SPECIAL_HI_FLAG_CHECK_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710001627c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

