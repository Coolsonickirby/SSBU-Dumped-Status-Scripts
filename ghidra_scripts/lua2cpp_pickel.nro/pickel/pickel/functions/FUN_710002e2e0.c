
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e2e0(long param_1)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  void *pvVar9;
  Article *pAVar10;
  BattleObjectModuleAccessor *pBVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar8 = (L2CValue *)(param_1 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
  lib::L2CValue::L2CValue(aLStack128,pLVar6);
  FUN_710002e830(aLStack80,param_1,aLStack128);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,false);
    lib::L2CValue::~L2CValue(aLStack64);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_PLATE);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_PLATE_FAILURE);
      uVar7 = lib::L2CValue::operator==(pLVar8,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_PLATE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::lua_bind::ArticleModule__is_generatable_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          pvVar9 = (void *)app::lua_bind::ArticleModule__get_article_impl
                                     (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
          if (pvVar9 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,pvVar9);
          }
          lib::L2CValue::~L2CValue(aLStack64);
          uVar7 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar7 & 1) == 0) {
            pAVar10 = (Article *)lib::L2CValue::as_pointer(aLStack80);
            uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar10);
            lib::L2CValue::L2CValue(aLStack64,uVar4);
            uVar4 = lib::L2CValue::as_integer(aLStack64);
            pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
            if (pvVar9 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,pvVar9);
            }
            lib::L2CValue::~L2CValue(aLStack64);
            uVar7 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar7 & 1) == 0) {
              pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
              iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar11);
              lib::L2CValue::L2CValue(aLStack112,iVar3);
              lib::L2CValue::L2CValue(aLStack64,_ITEM_STATUS_KIND_BORN);
              uVar7 = lib::L2CValue::operator==(aLStack112,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::~L2CValue(aLStack112);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack144,true);
              }
              else {
                lib::L2CValue::L2CValue(aLStack144,false);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack144,false);
            }
            lib::L2CValue::~L2CValue(aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,false);
          }
          lib::L2CValue::~L2CValue(aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,false);
        }
        lib::L2CValue::L2CValue(aLStack64,true);
        uVar7 = lib::L2CValue::operator==(aLStack144,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,true);
          FUN_710002eb60(aLStack160,param_1,aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_COMMAND_CATEGORY1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_JUMP_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ControlModule__clear_command_one_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_COMMAND_CATEGORY1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ControlModule__clear_command_one_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ControlModule__set_command_life_extend_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

