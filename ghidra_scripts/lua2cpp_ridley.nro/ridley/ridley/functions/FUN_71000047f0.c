
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000047f0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__inc_int_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0xe40ddcf87);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack96);
  uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::GroundModule__set_passable_check_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::GroundModule__set_passable_check_impl(param_1->moduleAccessor,(bool)(bVar1 & 1));
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_START_CHARGE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator==((L2CValue *)(auStack160 + 0x10),aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x1086bc4a93);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    uVar5 = lib::L2CValue::as_integer(param_5);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack160 + 0x10),_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_START_CHARGE
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
      app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
      app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_CHARGE_DECCEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),(bool)(bVar1 & 1));
  lib::L2CValue::operator!((L2CValue *)(auStack160 + 0x10));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(param_2);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(param_1->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar4 = lib::L2CValue::operator<=((L2CValue *)(auStack160 + 0x10),aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_CHARGE_DECCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(param_3);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar7);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
      uVar4 = lib::L2CValue::as_integer(param_4);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,(ulong)pLVar6,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar7);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar6);
      lib::L2CAgent::math_cos((L2CAgent *)auStack192,pLVar6);
      pLVar6 = aLStack96;
      lib::L2CValue::operator*((L2CValue *)(auStack192 + 0x10),pLVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CAgent::math_sin((L2CAgent *)auStack192,pLVar6);
      lib::L2CValue::operator*((L2CValue *)(auStack192 + 0x10),aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar4 = lib::L2CValue::operator<(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        lib::L2CValue::operator*(aLStack208,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::operator=(aLStack208,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar4 = lib::L2CValue::operator<(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        lib::L2CValue::operator*(aLStack224,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::operator=(aLStack224,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

