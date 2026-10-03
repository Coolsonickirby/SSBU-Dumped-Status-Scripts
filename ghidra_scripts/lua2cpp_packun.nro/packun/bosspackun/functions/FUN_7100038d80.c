
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100038d80(L2CWeaponPackunBosspackun *this,L2CValue *return_value)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined8 uVar7;
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
  
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  uVar7 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar7);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar7 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::L2CValue(aLStack80,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack176,0x1894e6ae4b);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
LAB_7100038f38:
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      if (bVar1) {
        lib::L2CValue::~L2CValue(aLStack176);
      }
    }
    else {
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar6);
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      uVar2 = lib::L2CValue::operator==(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack192);
      if (bVar1) {
        lib::L2CValue::~L2CValue(aLStack176);
      }
      if ((uVar2 & 1) != 0) goto LAB_7100038fac;
    }
    lib::L2CValue::L2CValue(aLStack80,0x10de737e71);
    lib::L2CValue::L2CValue(aLStack208,0xb7a7258c1);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar6);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar2 = lib::L2CValue::operator==(aLStack208,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar2 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::operator-(pLVar4,aLStack160);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::operator=(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      uVar2 = lib::L2CValue::operator<(pLVar4,aLStack192);
      if ((uVar2 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
        lib::L2CValue::operator=(pLVar4,aLStack192);
      }
      goto LAB_71000391ec;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator+(pLVar4,aLStack160);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator-(aLStack192);
    uVar2 = lib::L2CValue::operator<(aLStack80,pLVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) goto LAB_71000391ec;
    lib::L2CValue::operator-(aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar4,aLStack80);
  }
  else {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar6);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar2 = lib::L2CValue::operator==(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      bVar1 = true;
      goto LAB_7100038f38;
    }
    lib::L2CValue::~L2CValue(aLStack176);
LAB_7100038fac:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator*(aLStack96,aLStack160);
    lib::L2CValue::operator+(pLVar4,aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::operator=(pLVar4,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_71000391ec:
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack208,0xbf34bdeb7);
  uVar2 = lib::L2CValue::as_integer(aLStack192);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack224,0x75a1d25a7);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar6);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::operator-(aLStack80,aLStack192);
  lib::L2CValue::operator-(aLStack224);
  lib::L2CValue::operator=(aLStack80,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  uVar2 = lib::L2CValue::operator<(pLVar4,aLStack80);
  if ((uVar2 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar4,aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar4);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack208);
  FUN_7100039bd0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

