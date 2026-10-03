
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014800(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_LW_WORK_FLOAT_SHIELD_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    uVar4 = lib::L2CValue::operator==(aLStack64,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x12f0de089d);
          lib::L2CValue::L2CValue(aLStack112,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x17028c5795);
          lib::L2CValue::L2CValue(aLStack112,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
      else {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x12f0de089d);
          lib::L2CValue::L2CValue(aLStack112,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x17028c5795);
          lib::L2CValue::L2CValue(aLStack112,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_LW_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0xeb28cfd52);
          lib::L2CValue::L2CValue(aLStack112,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x1375061953);
          lib::L2CValue::L2CValue(aLStack112,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
      else {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0xeb28cfd52);
          lib::L2CValue::L2CValue(aLStack112,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_GENERATE_ARTICLE_WATERDRAGON);
          lib::L2CValue::L2CValue(aLStack96,0x1375061953);
          lib::L2CValue::L2CValue(aLStack112,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

