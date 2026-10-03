
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100040930(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,*pfVar5);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
  FUN_7100008920(aLStack112,param_1,aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_PERPLEXED);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) goto LAB_7100040fb4;
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_CHECK_AUTONOMY);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_AUTONOMY);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) goto LAB_7100040fb4;
    }
    lib::L2CValue::L2CValue
              (aLStack176,
               _WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_CHECK_INTERVAL);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue
              (aLStack192,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue
              (aLStack192,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLOAT_PERPLEXED_DIST_SQ);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::L2CValue(aLStack96,25.0);
    uVar6 = lib::L2CValue::operator<=(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_X);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::operator-(pLVar7,aLStack176);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack352,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack352);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack304,fVar9);
      lib::L2CValue::operator-(pLVar7,aLStack304);
      lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue
                (aLStack192,
                 _WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLOAT_PERPLEXED_TARGET_DIST);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack368,aLStack96);
      lua2cpp::L2CFighterBase::Vector2__length_square(param_1,(L2CValue)0x90);
      lib::L2CValue::operator*(aLStack176,aLStack176);
      uVar6 = lib::L2CValue::operator<=(aLStack304,aLStack192);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack368);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack192,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLAG_IS_PERPLEXED);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__on_flag_impl
                  (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack192);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLOAT_PERPLEXED_DIST_SQ);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar3);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_INT_PERPLEXED_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pfVar5 = (float *)app::lua_bind::PostureModule__prev_pos_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack240,*pfVar5);
    lib::L2CValue::L2CValue(aLStack224,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack208,pfVar5[2]);
    FUN_7100008920(aLStack96,param_1,aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
    lib::L2CValue::operator-(pLVar7,pLVar8);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar7,pLVar8);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack288,aLStack176);
    lua2cpp::L2CFighterBase::Vector2__length_square(param_1,(L2CValue)0xe0);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_PIKMIN_PIKMIN_STATUS_FOLLOW_COMMON_WORK_FLOAT_PERPLEXED_DIST_SQ);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack288);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100040fb4:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

