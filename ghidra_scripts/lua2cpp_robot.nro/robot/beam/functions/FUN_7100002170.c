
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100002170(void *param_1)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CAgent *this_00;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  L2CValue aLStack320 [16];
  undefined auStack304 [32];
  ulong local_110;
  ulong uStack264;
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
  
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  pfVar2 = (float *)app::lua_bind::PostureModule__rot_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack176,*pfVar2);
  lib::L2CValue::L2CValue(aLStack160,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[2]);
  FUN_71000026e0(aLStack128,param_1,aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  uVar11 = app::lua_bind::KineticModule__get_sum_speed_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_110,aLStack224);
  lib::L2CValue::L2CValue(aLStack96,aLStack208);
  pLVar7 = aLStack96;
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xf0,SUB81(pLVar7,0));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  fVar8 = (float)lib::L2CValue::as_number(pLVar5);
  fVar9 = (float)lib::L2CValue::as_number(this);
  uVar11 = app::sv_math::vec2_normalize(fVar8,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_110);
  lib::L2CValue::operator=(pLVar4,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  this_00 = (L2CAgent *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  lib::L2CValue::operator*(pLVar3,aLStack112);
  pLVar3 = aLStack240;
  lib::L2CAgent::math_atan(this_00,pLVar3,pLVar7);
  lib::L2CValue::operator-((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  fVar8 = (float)app::SlopeModuleSimple::gravity_angle(pBVar6);
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  pLVar3 = aLStack112;
  lib::L2CValue::operator*(aLStack320,pLVar3);
  lib::L2CAgent::math_deg((L2CAgent *)auStack304,pLVar3);
  lib::L2CValue::operator+(aLStack240,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_110);
  lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack240);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  uVar12 = lib::L2CValue::as_number(pLVar3);
  lVar13 = lib::L2CValue::as_number(pLVar4);
  uVar10 = lib::L2CValue::as_number(pLVar5);
  local_110 = uVar12 & 0xffffffff | lVar13 << 0x20;
  uStack264 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector3f *)&local_110,0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

