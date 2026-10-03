
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cf00(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  ArticleOperationTarget AVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar7 = (L2CValue *)((long)param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack128,0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
LAB_710001d124:
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_BOMB_JUMP_G);
      uVar5 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_WEAPON);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_GENERATE_ARTICLE_BOMB);
          lib::L2CValue::operator=(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack160,0xcbde2b6d8);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar6 = lib::L2CValue::as_integer(aLStack160);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack80,iVar2);
          lib::L2CValue::operator=(aLStack128,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          iVar2 = app::lua_bind::ArticleModule__get_active_num_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
          lib::L2CValue::L2CValue(aLStack80,iVar2);
          lib::L2CValue::operator=(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          uVar5 = lib::L2CValue::operator<(aLStack96,aLStack128);
          if ((uVar5 & 1) != 0) {
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::ArticleModule__generate_article_enable_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2,false,-1);
            lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
            lib::L2CValue::L2CValue(aLStack144,false);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            AVar3 = lib::L2CValue::as_integer(aLStack80);
            bVar1 = lib::L2CValue::as_bool(aLStack144);
            app::lua_bind::ArticleModule__shoot_exist_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2,AVar3,
                       (bool)(bVar1 & 1));
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_WEAPON);
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
          lib::L2CValue::~L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack176,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_CHK_CROUCH);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar5 & 1) != 0) goto LAB_710001d124;
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1b);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x10d088fec9);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      uVar5 = lib::L2CValue::operator<(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) == 0) goto LAB_710001d124;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_SPECIAL_LW_FLAG_CHK_CROUCH);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack176,1);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) {
      iVar2 = 1;
      goto LAB_710001d3ac;
    }
  }
  iVar2 = 0;
LAB_710001d3ac:
  lib::L2CValue::L2CValue(param_1,iVar2);
  return;
}

