
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016b60(L2CAgent *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  L2CValue *this;
  L2CValue *pLVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack176);
  uVar8 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(float)uVar8);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,(L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::L2CValue(aLStack112,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__normalize(param_1,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack192);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar3 = (L2CValue *)0x1fbdb2615;
  this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack208);
  fVar6 = (float)lib::L2CValue::as_number(pLVar2);
  fVar7 = (float)lib::L2CValue::as_number(this);
  fVar4 = (float)app::sv_math::vec2_angle(fVar4,fVar5,fVar6,fVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar4);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar3);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar2);
  lua2cpp::L2CFighterBase::sign(param_1,(L2CValue)0x10);
  lib::L2CValue::operator*(aLStack208,aLStack224);
  lib::L2CValue::operator=((L2CValue *)auStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLOAT_RUSH_DEGREE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

