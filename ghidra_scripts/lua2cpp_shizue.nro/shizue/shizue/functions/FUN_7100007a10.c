
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007a10(void *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  void *pvVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  long lVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar12;
  undefined8 uVar13;
  ulong uVar14;
  float in_register_00005008;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  ulong local_180;
  ulong uStack376;
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
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_180,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_LINE_LENGTH);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x5e05e32cb);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  uVar13 = app::lua_bind::ArticleModule__get_joint_pos_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,HVar4,0);
  lib::L2CValue::L2CValue(aLStack192,(float)uVar13);
  lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar13 >> 0x20));
  lib::L2CValue::L2CValue(aLStack160,in_register_00005008);
  FUN_7100008290(aLStack144,param_1,aLStack192);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_180,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack208,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,pvVar5);
  }
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack304,pvVar5);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack304);
  uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
  lib::L2CValue::L2CValue(aLStack320,uVar3);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_180,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_INT_HOOK_JOINT_ID);
  uVar3 = lib::L2CValue::as_integer(aLStack320);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,pvVar5);
  }
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_70);
  lVar8 = app::lua_bind::WorkModule__get_int64_impl(pBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack336,lVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  lib::L2CValue::L2CValue(aLStack400,true);
  HVar4 = lib::L2CValue::as_hash(aLStack336);
  uVar14 = lib::L2CValue::as_number(this);
  lVar8 = lib::L2CValue::as_number(this_00);
  uVar3 = lib::L2CValue::as_number(this_01);
  local_70 = uVar14 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar3;
  bVar1 = lib::L2CValue::as_bool(aLStack400);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack224);
  app::lua_bind::ModelModule__joint_global_position_impl
            (pBVar7,HVar4,(Vector3f *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_180,(float)local_70);
  lib::L2CValue::L2CValue(aLStack368,local_70._4_4_);
  lib::L2CValue::L2CValue(aLStack352,(float)uStack104);
  lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_180);
  lib::L2CValue::operator=(pLVar10,aLStack368);
  lib::L2CValue::operator=(pLVar11,aLStack352);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::operator-(aLStack240,aLStack144);
  lib::L2CValue::L2CValue(aLStack416,(L2CValue *)&local_70);
  lua2cpp::L2CFighterBase::Vector3__normalize(param_1,(L2CValue)0x60);
  lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_180);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack128);
  lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_180);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::operator+((L2CValue *)&local_70,aLStack144);
  lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_180);
  lib::L2CValue::~L2CValue((L2CValue *)&local_180);
  lib::L2CValue::L2CValue(aLStack400,0x54f934137);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x162d277af);
  lib::L2CValue::L2CValue(aLStack432,true);
  HVar4 = lib::L2CValue::as_hash(aLStack400);
  uVar14 = lib::L2CValue::as_number(pLVar9);
  lVar8 = lib::L2CValue::as_number(pLVar10);
  uVar3 = lib::L2CValue::as_number(pLVar11);
  local_180 = uVar14 & 0xffffffff | lVar8 << 0x20;
  uStack376 = (ulong)uVar3;
  bVar1 = lib::L2CValue::as_bool(aLStack432);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar4,(Vector3f *)&local_180,
             (bool)(bVar1 & 1),false);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

