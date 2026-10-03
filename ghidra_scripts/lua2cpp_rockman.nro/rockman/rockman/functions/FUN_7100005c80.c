
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100005c80(L2CFighterRockman *this,L2CValue *return_value)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *in_x1;
  L2CValue *pLVar7;
  ulong *puVar8;
  L2CValue *in_x2;
  L2CValue *in_x3;
  L2CValue *in_x4;
  L2CValue *in_x5;
  float fVar9;
  float fVar10;
  long lVar11;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
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
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  ulong local_70;
  BattleObject *pBStack104;
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack368,in_x1);
  lib::L2CValue::L2CValue(aLStack384,in_x2);
  lib::L2CValue::L2CValue(aLStack400,in_x3);
  lib::L2CValue::L2CValue(aLStack416,in_x4);
  lib::L2CValue::L2CValue(aLStack432,in_x5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_INSTANCE_WORK_ID_FLAG_DEAD_AREA_OUT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  pLVar7 = (L2CValue *)(ulong)(uVar4 & 1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SUB41(uVar4 & 1,0));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_INT_COLOR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
    lib::L2CValue::L2CValue(aLStack176,7);
    lua2cpp::L2CFighterBase::clamp
              (this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'),(L2CValue)(cVar1 + '`'));
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::EffectModule__set_offset_to_next_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,0xec3750e52);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack304,-1);
    HVar6 = lib::L2CValue::as_hash(aLStack208);
    uVar5 = lib::L2CValue::as_number(aLStack368);
    lVar11 = lib::L2CValue::as_number(aLStack384);
    uVar4 = lib::L2CValue::as_number(aLStack400);
    local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar11 << 0x20);
    uStack88 = (ulong)uVar4;
    uVar5 = lib::L2CValue::as_number(aLStack224);
    lVar11 = lib::L2CValue::as_number(aLStack240);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
    pBStack104 = (BattleObject *)(ulong)uVar4;
    fVar9 = (float)lib::L2CValue::as_number(aLStack272);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    uVar4 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar6,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar9,
                       uVar4,iVar3,false,0);
    lib::L2CValue::L2CValue(aLStack192,uVar4);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lVar11 = -0xc0;
    goto LAB_7100006468;
  }
  lib::L2CValue::operator-(aLStack416);
  lib::L2CAgent::math_sin((L2CAgent *)(auStack160 + 0x10),pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,70.0);
  puVar8 = &local_70;
  lib::L2CValue::operator*((L2CValue *)&local_60,(L2CValue *)puVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::operator-(aLStack416);
  lib::L2CAgent::math_cos((L2CAgent *)auStack160,(L2CValue *)puVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,70.0);
  lib::L2CValue::operator*((L2CValue *)&local_60,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  iVar3 = app::sv_information::stage_id();
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_DAT_710014d1c0);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLOAT_DEAD_POS_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLOAT_DEAD_POS_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLOAT_DEAD_POS_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
    lVar11 = lib::L2CValue::as_number((L2CValue *)auStack160);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar11 << 0x20);
    uStack88 = (ulong)uVar4;
    fVar9 = (float)lib::L2CValue::as_number(aLStack208);
    fVar10 = (float)lib::L2CValue::as_number(aLStack224);
    iVar3 = app::GroundUtility::check_dead_area2((Vector3f *)&local_60,fVar9,fVar10);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_LEFT);
    uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_DEAD_AREA_CHECK_RESULT_OUTSIDE_RIGHT);
      uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) goto LAB_7100005f98;
    }
    else {
LAB_7100005f98:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_INT_COLOR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack176,(L2CValue *)auStack160);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,7);
  lua2cpp::L2CFighterBase::clamp
            (this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'),(L2CValue)(cVar1 + '@'));
  lib::L2CValue::operator=((L2CValue *)auStack160,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  app::lua_bind::EffectModule__set_offset_to_next_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack240,0xec3750e52);
  lib::L2CValue::operator+(aLStack368,aLStack128);
  lib::L2CValue::operator+(aLStack384,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,EFFECT_SUB_ATTRIBUTE_NONE);
  lib::L2CValue::L2CValue(aLStack352,-1);
  HVar6 = lib::L2CValue::as_hash(aLStack240);
  uVar5 = lib::L2CValue::as_number(aLStack256);
  lVar11 = lib::L2CValue::as_number(aLStack272);
  uVar4 = lib::L2CValue::as_number(aLStack400);
  local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar11 << 0x20);
  uStack88 = (ulong)uVar4;
  uVar5 = lib::L2CValue::as_number(aLStack288);
  lVar11 = lib::L2CValue::as_number(aLStack304);
  uVar4 = lib::L2CValue::as_number(aLStack320);
  local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
  pBStack104 = (BattleObject *)(ulong)uVar4;
  fVar9 = (float)lib::L2CValue::as_number(aLStack432);
  uVar4 = lib::L2CValue::as_integer(aLStack336);
  iVar3 = lib::L2CValue::as_integer(aLStack352);
  uVar4 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar6,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar9,
                     uVar4,iVar3,false,0);
  lib::L2CValue::L2CValue(aLStack224,uVar4);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lVar11 = -0x80;
LAB_7100006468:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  return;
}

