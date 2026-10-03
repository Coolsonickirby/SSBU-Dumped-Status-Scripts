
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000164c0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  L2CValue *this;
  L2CValue *this_00;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack176);
  uVar9 = app::sv_kinetic_energy::get_speed(param_2->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack160);
  lib::L2CValue::L2CValue(aLStack112,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack208,-1.0);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
  pLVar4 = (L2CValue *)0x1fbdb2615;
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  fVar5 = (float)lib::L2CValue::as_number(aLStack176);
  fVar6 = (float)lib::L2CValue::as_number(aLStack208);
  fVar7 = (float)lib::L2CValue::as_number(this);
  fVar8 = (float)lib::L2CValue::as_number(this_00);
  fVar5 = (float)app::sv_math::vec2_angle(fVar5,fVar6,fVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack112,pLVar4);
  lib::L2CValue::operator=(aLStack112,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack224,0x1a515e41bd);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  uVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  bVar1 = lib::L2CValue::operator<=(aLStack112,aLStack176);
  lib::L2CValue::L2CValue(param_1,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

