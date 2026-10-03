
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d240(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  L2CValue aLStack384 [16];
  ulong local_170;
  ulong uStack360;
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
  undefined8 local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_170,0xc08c7dc08);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xe97c8a4e8);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xc08c7dc08);
  lib::L2CValue::L2CValue(aLStack224,0xee0cf947e);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  lib::L2CValue::L2CValue(aLStack256,0xc08c7dc08);
  lib::L2CValue::L2CValue(aLStack272,0xe79c6c5c4);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,fVar12);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  lib::L2CValue::L2CValue(aLStack256,0x31d39a761);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  HVar11 = lib::L2CValue::as_hash(aLStack256);
  uVar4 = lib::L2CValue::as_number(pLVar9);
  lVar15 = lib::L2CValue::as_number(pLVar10);
  uVar13 = lib::L2CValue::as_number(this);
  local_90 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  uVar4 = lib::L2CValue::as_number(this_00);
  lVar15 = lib::L2CValue::as_number(this_01);
  uVar13 = lib::L2CValue::as_number(this_02);
  local_a0 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack152 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_with_offset_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar11,(Vector3f *)&local_90,
             (Vector3f *)&local_a0,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack352,local_a0._4_4_);
  lib::L2CValue::L2CValue(aLStack336,(float)uStack152);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_170);
  lib::L2CValue::operator=(pLVar7,aLStack352);
  lib::L2CValue::operator=(pLVar8,aLStack336);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack256);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_170,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLOAT_SIGHT_POS_X);
  fVar12 = (float)lib::L2CValue::as_number(pLVar6);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_170,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLOAT_SIGHT_POS_Y);
  fVar12 = (float)lib::L2CValue::as_number(pLVar6);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,false);
  uVar4 = lib::L2CValue::as_number(pLVar8);
  lVar15 = lib::L2CValue::as_number(pLVar9);
  uVar13 = lib::L2CValue::as_number(pLVar10);
  local_90 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
  uVar16 = app::sv_camera_manager::world_to_screen((Vector3f *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_170);
  lib::L2CValue::operator=(pLVar7,aLStack352);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  bVar1 = app::sv_stage::is_horizontal_reverse_enabled();
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_170);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    lib::L2CValue::operator-((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  bVar1 = app::sv_stage::is_vertical_reverse_enabled();
  lib::L2CValue::L2CValue((L2CValue *)&local_170,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_170);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,1.0);
    lib::L2CValue::operator-(aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,960.0);
  lib::L2CValue::operator-(pLVar6,(L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::operator*(aLStack272,(L2CValue *)&local_90);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
  lib::L2CValue::operator=(pLVar6,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_170,540.0);
  lib::L2CValue::operator+(aLStack384,(L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::operator*(aLStack272,(L2CValue *)&local_a0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_170,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_SIGHT_EFFECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_170);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  uVar13 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar13);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_170,true);
  uVar4 = lib::L2CValue::operator==(aLStack272,(L2CValue *)&local_170);
  lib::L2CValue::~L2CValue((L2CValue *)&local_170);
  lib::L2CValue::~L2CValue(aLStack272);
  if ((uVar4 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack224,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar13 = lib::L2CValue::as_integer(aLStack256);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    lVar15 = lib::L2CValue::as_number(pLVar7);
    uVar14 = lib::L2CValue::as_number(aLStack272);
    local_170 = uVar4 & 0xffffffff | lVar15 << 0x20;
    uStack360 = (ulong)uVar14;
    app::lua_bind::EffectModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar13,(Vector3f *)&local_170)
    ;
    lib::L2CValue::~L2CValue(aLStack272);
  }
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

