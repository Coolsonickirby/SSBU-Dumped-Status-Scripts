
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000369c0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  code *pcVar6;
  long *plVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  float fVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xfcd9c54f9);
  lib::L2CValue::L2CValue(aLStack128,0xed278293a);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack96,100.0);
  lib::L2CValue::operator*(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  uVar2 = app::sv_math::rand(HVar5,iVar1);
  lib::L2CValue::L2CValue(aLStack144,uVar2);
  lib::L2CValue::L2CValue(aLStack96,100.0);
  lib::L2CValue::operator/(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack176,0x168);
  HVar5 = lib::L2CValue::as_hash(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = app::sv_math::rand(HVar5,iVar1);
  pLVar8 = (L2CValue *)(uVar3 & 0xffffffff);
  lib::L2CValue::L2CValue(aLStack96,(uint)pLVar8);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  app::FighterInklingLinkEventPaint::new_l2c_table();
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack96,0x1badb0080f);
  pLVar9 = aLStack96;
  lib::L2CValue::operator=(pLVar8,pLVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack144,pLVar9);
  lib::L2CValue::operator*(aLStack192,aLStack128);
  lib::L2CValue::operator+(param_2,aLStack176);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x4f63695cd);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
  lib::L2CValue::operator=(pLVar8,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x4f63695cd);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar8,param_3);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack144,param_3);
  lib::L2CValue::operator*(aLStack192,aLStack128);
  lib::L2CValue::operator+(param_4,aLStack176);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x4f63695cd);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x162d277af);
  lib::L2CValue::operator=(pLVar8,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0xc3da1bb73);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x18cdc1683);
  lib::L2CValue::operator=(pLVar8,param_5);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0xc3da1bb73);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar8,param_6);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_LINK_NO_CONSTRAINT);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x11f63699bf);
  pcVar6 = (code *)lib::L2CValue::as_pointer(pLVar8);
  plVar7 = (long *)(*pcVar6)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar7,aLStack160);
  app::lua_bind::LinkModule__send_event_parents_struct_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,(LinkEvent *)plVar7);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar7);
  lib::L2CValue::L2CValue(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  (**(code **)(*plVar7 + 8))(plVar7);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

