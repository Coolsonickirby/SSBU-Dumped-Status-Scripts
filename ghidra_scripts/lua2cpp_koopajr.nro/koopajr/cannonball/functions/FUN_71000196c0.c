
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000196c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_INT_GRAVITY_FRAME)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar4);
    lVar1 = -0x30;
    goto LAB_7100019b98;
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_INT_GRAVITY_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar6 = lib::L2CValue::operator<=(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar3 = app::lua_bind::AttackModule__is_attack_impl(param_2->moduleAccessor,iVar4,false);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_FLAG_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        goto LAB_7100019888;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_FLAG_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
LAB_7100019888:
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KOOPAJR_CANNONBALL_KINETIC_ENERGY_ID_GRAVITY);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,0x10a8311a31);
      lib::L2CValue::L2CValue(aLStack112,0x12a5c5cf47);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack64,fVar8);
      fVar8 = (float)lib::L2CValue::as_number(aLStack64);
      app::lua_bind::AttackModule__set_power_mul_status_impl(param_2->moduleAccessor,fVar8);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack64,-1);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_INT_GRAVITY_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      fVar8 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0x10a8311a31);
      lib::L2CValue::L2CValue(aLStack144,0x7a23bb1d9);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      lib::L2CAgent::push_lua_stack(param_2,aLStack176);
      lib::L2CAgent::push_lua_stack(param_2,aLStack192);
      app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lVar1 = -0x40;
LAB_7100019b98:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

