
void FUN_7100028280(L2CValue *param_1,void *param_2,L2CAgent *param_3)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined8 uVar6;
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
  L2CValue aLStack80 [16];
  
  uVar6 = app::lua_bind::PostureModule__pos_2d_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack80,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack128);
  pLVar3 = aLStack80;
  lua2cpp::L2CFighterBase::Vector2__create(param_2,SUB81(pLVar3,0),(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CAgent::math_rad(param_3,pLVar3);
  fVar5 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0x12145d2880);
  uVar1 = lib::L2CValue::as_integer(aLStack192);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  lib::L2CValue::operator*(aLStack176,aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar4 = (L2CValue *)0x18cdc1683;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack80,pLVar4);
  lib::L2CValue::operator*(aLStack208,aLStack160);
  lib::L2CValue::operator+(pLVar3,aLStack192);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar4 = (L2CValue *)0x1fbdb2615;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack80,pLVar4);
  lib::L2CValue::operator*(aLStack224,aLStack160);
  lib::L2CValue::operator+(pLVar3,aLStack208);
  lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack288,0x16ee6fe522);
  uVar1 = lib::L2CValue::as_integer(aLStack272);
  uVar2 = lib::L2CValue::as_integer(aLStack288);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack256,fVar5);
  lib::L2CValue::operator*(aLStack256,aLStack96);
  lib::L2CValue::operator+(aLStack192,aLStack240);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar3,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue(param_1,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(param_1 + 0x10,pLVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

