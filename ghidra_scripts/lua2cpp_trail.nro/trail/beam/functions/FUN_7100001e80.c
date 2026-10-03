
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100001e80(void *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  undefined8 uVar12;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  undefined8 uStack152;
  ulong local_90;
  undefined8 uStack136;
  ulong local_80;
  undefined8 uStack120;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_TRAIL_BEAM_INSTANCE_WORK_ID_FLOAT_POS_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack304,fVar8);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_2,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_TRAIL_BEAM_INSTANCE_WORK_ID_FLOAT_POS_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack304,fVar8);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_2,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar3,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack192,param_4);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack304,true);
  uVar4 = lib::L2CValue::operator==(param_5,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_TRAIL_BEAM_INSTANCE_WORK_ID_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar8);
    fVar8 = (float)lib::L2CValue::as_number(pLVar6);
    fVar9 = (float)lib::L2CValue::as_number(pLVar7);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    uVar12 = app::sv_math::vec2_rot(fVar8,fVar9,fVar10);
    lib::L2CValue::L2CValue(aLStack304,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator=(pLVar3,aLStack304);
    lib::L2CValue::operator=(pLVar5,aLStack288);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar8);
  lib::L2CValue::operator*(aLStack176,(L2CValue *)&local_80);
  lib::L2CValue::operator=(aLStack176,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_2,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator+(pLVar3,pLVar5);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x18cdc1683);
  lib::L2CValue::operator=(pLVar3,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_2,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar3,pLVar5);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar3,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_2,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_2,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack320,false);
  uVar4 = lib::L2CValue::as_number(pLVar3);
  uVar11 = lib::L2CValue::as_number(pLVar5);
  local_80 = uVar4 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack120 = 0;
  uVar4 = lib::L2CValue::as_number(pLVar6);
  uVar11 = lib::L2CValue::as_number(pLVar7);
  local_90 = uVar4 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack136 = 0;
  uVar4 = lib::L2CValue::as_number(aLStack240);
  uVar11 = lib::L2CValue::as_number(aLStack256);
  local_a0 = uVar4 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack152 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack320);
  bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector2f *)&local_80,
                     (Vector2f *)&local_90,(Vector2f *)&local_a0,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack288,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack272,local_a0._4_4_);
  lib::L2CValue::operator=(aLStack224,aLStack304);
  lib::L2CValue::operator=(aLStack240,aLStack288);
  lib::L2CValue::operator=(aLStack256,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack304,true);
  uVar4 = lib::L2CValue::operator==(aLStack224,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x18cdc1683);
    lib::L2CValue::operator=(pLVar3,aLStack240);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar3,aLStack256);
  }
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

