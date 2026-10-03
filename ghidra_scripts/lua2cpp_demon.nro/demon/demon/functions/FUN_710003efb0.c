
void FUN_710003efb0(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  Article *pAVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  iVar4 = lib::L2CValue::as_integer(param_2);
  pvVar6 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack112,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  uVar7 = lib::L2CValue::operator==
                    (aLStack112,
                     (L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
  if ((uVar7 & 1) == 0) {
    pAVar8 = (Article *)lib::L2CValue::as_pointer(aLStack112);
    uVar5 = app::lua_bind::Article__get_battle_object_id_impl(pAVar8);
    lib::L2CValue::L2CValue(aLStack96,uVar5);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack128,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar6);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar7 = lib::L2CValue::operator==(param_4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      lib::L2CValue::L2CValue(aLStack208,false);
      HVar9 = lib::L2CValue::as_hash(param_3);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      fVar13 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      bVar3 = lib::L2CValue::as_bool(aLStack208);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (pBVar10,HVar9,fVar11,fVar12,(bool)(bVar1 & 1),fVar13,(bool)(bVar2 & 1),
                 (bool)(bVar3 & 1));
      lib::L2CValue::~L2CValue(aLStack208);
    }
    else {
      app::lua_bind::MotionAnimcmdModule__flush_current_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::L2CValue(aLStack192,true);
      HVar9 = lib::L2CValue::as_hash(param_3);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (pBVar10,HVar9,fVar11,fVar12,fVar13,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

