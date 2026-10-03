
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000253c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  BattleObject **this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_7100025be8;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_START_ROTATION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_START_ROTATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_ROTATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_GRAVITY_DEFAULT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,true);
    FUN_7100023ef0(param_2,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_END_ROTATION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_END_ROTATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_ROTATION);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,true);
    FUN_7100023ef0(param_2,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_REQUEST_GRAVITY_DEFAULT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_REQUEST_GRAVITY_DEFAULT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_GRAVITY_DEFAULT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_SPECIAL_N_FLAG_ROTATION);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) goto LAB_7100025be8;
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0x1774a3156b);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0x1b528c9025);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x11af127ad9);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x15d94f8ec6);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  this = &param_2[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
  lib::L2CValue::L2CValue(aLStack80,-0.1);
  uVar5 = lib::L2CValue::operator<=(aLStack80,pLVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
LAB_7100025970:
    lib::L2CValue::L2CValue(aLStack192,0.0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator=(aLStack192,aLStack144);
    }
    else {
      lib::L2CValue::operator=(aLStack192,aLStack96);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::L2CValue(aLStack80,-0.1);
    uVar5 = lib::L2CValue::operator<(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator-(aLStack192);
      lib::L2CValue::operator=(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    lib::L2CAgent::push_lua_stack(param_2,aLStack224);
    app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
    lib::L2CValue::L2CValue(aLStack80,0.1);
    uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_7100025970;
    lib::L2CValue::L2CValue(aLStack192,0.0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator=(aLStack192,aLStack176);
    }
    else {
      lib::L2CValue::operator=(aLStack192,aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    lib::L2CAgent::push_lua_stack(param_2,aLStack224);
    app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100025be8:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

