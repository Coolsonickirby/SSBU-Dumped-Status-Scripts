
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000381b0(L2CWeaponPackunBosspackun *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CTable *this_00;
  L2CValue *pLVar8;
  L2CValue *this_01;
  L2CAgent *this_02;
  float fVar9;
  undefined8 uVar10;
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack128,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0x75a1d25a7);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0xb0d756857);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0xb7a7258c1);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0xfd19a4e4e);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,uVar5,(ulong)pLVar7);
  lib::L2CValue::L2CValue(aLStack240,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  this_00 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this_00,0);
  lib::L2CValue::L2CValue(aLStack96,this_00);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::operator=(pLVar8,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::operator=(pLVar8,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack128,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack112,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::operator=(pLVar8,aLStack128);
  lib::L2CValue::operator=(this_01,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  this_02 = (L2CAgent *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  lib::L2CAgent::math_atan(this_02,pLVar8,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack144,pLVar8);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  uVar5 = lib::L2CValue::operator==(aLStack176,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator-(aLStack160);
    lib::L2CValue::operator=(aLStack256,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::operator=(aLStack256,aLStack160);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack96);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack256,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0x10de737e71);
      lib::L2CValue::L2CValue(aLStack160,0x13d1ae6e2a);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,90.0);
      lib::L2CValue::operator-(aLStack128,aLStack256);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,90.0);
      lib::L2CValue::operator*(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::operator/(aLStack272,aLStack288);
      lib::L2CValue::operator+(aLStack208,aLStack176);
      lib::L2CValue::operator=(aLStack208,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::L2CValue
            (aLStack144,_WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLAG_HOP_LANDING_HOP_SPEED_Y_ADD);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x10de737e71);
    lib::L2CValue::L2CValue(aLStack160,0xf60450711);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::operator+(aLStack208,aLStack128);
    lib::L2CValue::operator=(aLStack208,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::operator*(aLStack224,aLStack160);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::operator-(aLStack192);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack144,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  return;
}

