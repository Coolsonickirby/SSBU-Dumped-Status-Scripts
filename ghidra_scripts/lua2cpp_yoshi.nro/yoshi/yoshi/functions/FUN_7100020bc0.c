
void FUN_7100020bc0(void *param_1,L2CValue *param_2)

{
  uint uVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  L2CValue *this;
  float *pfVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined local_b0 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  uVar1 = lib::L2CValue::as_integer(param_2);
  uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_b0,(float)uVar8);
  pLVar5 = (L2CValue *)(local_b0 + 0x10);
  lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::operator=(pLVar2,(L2CValue *)local_b0);
  lib::L2CValue::operator=(pLVar3,pLVar5);
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_b0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  pLVar5 = aLStack224;
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x30,SUB81(pLVar5,0));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  uVar1 = lib::L2CValue::as_integer(param_2);
  pfVar4 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar1);
  lib::L2CValue::L2CValue((L2CValue *)local_b0,*pfVar4);
  pLVar2 = (L2CValue *)(local_b0 + 0x10);
  lib::L2CValue::L2CValue(pLVar2,pfVar4[1]);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)local_b0);
  lib::L2CValue::operator=(this,pLVar2);
  lib::L2CValue::~L2CValue(pLVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_b0);
  fVar7 = (float)app::lua_bind::GroundModule__get_z_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack240,fVar7);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  lib::L2CValue::operator-(pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CAgent::math_atan((L2CAgent *)local_b0,pLVar2,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)local_b0);
  lib::L2CValue::L2CValue(aLStack288,0x92a3b5b68);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  HVar6 = lib::L2CValue::as_hash(aLStack288);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  lVar10 = lib::L2CValue::as_number(pLVar2);
  uVar1 = lib::L2CValue::as_number(aLStack240);
  local_b0._0_8_ = (void **)(uVar9 & 0xffffffff | lVar10 << 0x20);
  local_b0._8_8_ = (lua_State *)(ulong)uVar1;
  uVar9 = lib::L2CValue::as_number(aLStack304);
  lVar10 = lib::L2CValue::as_number(aLStack320);
  uVar1 = lib::L2CValue::as_number(aLStack256);
  local_60 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar1;
  uVar1 = app::lua_bind::EffectModule__req_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,
                     (Vector3f *)local_b0,(Vector3f *)&local_60,1.0,0,-1,false,0);
  lib::L2CValue::L2CValue(aLStack272,uVar1);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

