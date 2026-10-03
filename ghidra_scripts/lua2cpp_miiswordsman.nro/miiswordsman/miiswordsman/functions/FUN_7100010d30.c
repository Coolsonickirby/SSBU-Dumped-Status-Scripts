
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100010d30(L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar8 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::operator=(pLVar4,aLStack160);
  lib::L2CValue::operator=(this_00,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack176,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack192,pLVar4);
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,iVar2);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar5 = lib::L2CValue::operator==(aLStack208,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW1_HIT);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar5 & 1) == 0) goto LAB_710001187c;
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_COUNTER_WORK_FLOAT_ATTACK_POWER)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack224,fVar7);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack256,0xee7c0b7d5);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack256);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar7);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MIISWORDSMAN_STATUS_COUNTER_FLAG_IS_ATTACK_ENEMY);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack160,false);
    uVar5 = lib::L2CValue::operator==(aLStack272,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0x180e187e23);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator=(aLStack256,aLStack160);
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0xed3b4b4fd);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator=(aLStack256,aLStack160);
    }
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::operator*(aLStack224,aLStack240);
    lib::L2CValue::operator=(aLStack224,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x1699fa5d87);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    uVar6 = lib::L2CValue::as_integer(aLStack288);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    uVar5 = lib::L2CValue::operator<(aLStack224,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack288,0x1699fa5d87);
      uVar5 = lib::L2CValue::as_integer(aLStack272);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::operator=(aLStack224,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    uVar5 = lib::L2CValue::operator<(aLStack256,aLStack224);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=(aLStack224,aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MIISWORDSMAN_STATUS_COUNTER_WORK_FLOAT_ATTACK_POWER)
    ;
    fVar7 = (float)lib::L2CValue::as_number(aLStack224);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar4 = aLStack224;
  }
  else {
    iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,iVar2);
    lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(aLStack224,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_MIISWORDSMAN_STATUS_COUNTER_WORK_INT_SITUATION_PREV);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x1379c2fa53);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      lib::L2CValue::operator*(aLStack176,aLStack224);
      lib::L2CValue::operator=(aLStack176,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::operator=(aLStack192,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack224,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x13d59ca79b);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack224,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0x104ceb8f0b);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar7);
      lib::L2CValue::operator-(aLStack240);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack240,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack256,0x10383da12d);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
      lib::L2CValue::L2CValue
                (aLStack224,_FIGHTER_MIISWORDSMAN_STATUS_COUNTER_WORK_INT_SITUATION_PREV);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar4 = aLStack160;
  }
  lib::L2CValue::~L2CValue(pLVar4);
LAB_710001187c:
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

