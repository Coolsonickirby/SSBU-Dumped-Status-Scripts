
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014720(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack80,HVar4);
    lib::L2CValue::L2CValue(aLStack64,0x119a8ed3fe);
    uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      HVar4 = app::lua_bind::MotionModule__motion_kind_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,HVar4);
      lib::L2CValue::L2CValue(aLStack64,0x127b3ee7af);
      uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        HVar4 = app::lua_bind::MotionModule__motion_kind_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        lib::L2CValue::L2CValue(aLStack80,HVar4);
        lib::L2CValue::L2CValue(aLStack64,0xd7ae370d7);
        uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
        if ((uVar5 & 1) == 0) {
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
            lib::L2CValue::L2CValue(aLStack80,0xe396c1260);
            lib::L2CValue::L2CValue(aLStack96,false);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            HVar4 = lib::L2CValue::as_hash(aLStack80);
            bVar1 = lib::L2CValue::as_bool(aLStack96);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,
                       (bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
            lib::L2CValue::L2CValue(aLStack80,0xe396c1260);
            lib::L2CValue::L2CValue(aLStack96,true);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            HVar4 = lib::L2CValue::as_hash(aLStack80);
            bVar1 = lib::L2CValue::as_bool(aLStack96);
            app::lua_bind::ArticleModule__change_motion_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,
                       (bool)(bVar1 & 1),-1.0);
          }
        }
        else if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
          lib::L2CValue::L2CValue(aLStack80,0xd7ae370d7);
          lib::L2CValue::L2CValue(aLStack96,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
          lib::L2CValue::L2CValue(aLStack80,0xd7ae370d7);
          lib::L2CValue::L2CValue(aLStack96,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
      else {
        bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
          lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
          lib::L2CValue::L2CValue(aLStack96,false);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                     -1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
          lib::L2CValue::L2CValue(aLStack80,0x127b3ee7af);
          lib::L2CValue::L2CValue(aLStack96,true);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          bVar1 = lib::L2CValue::as_bool(aLStack96);
          app::lua_bind::ArticleModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                     -1.0);
        }
      }
    }
    else {
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
        lib::L2CValue::L2CValue(aLStack80,0x119a8ed3fe);
        lib::L2CValue::L2CValue(aLStack96,false);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                   -1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PEACH_GENERATE_ARTICLE_KINOPIO);
        lib::L2CValue::L2CValue(aLStack80,0x119a8ed3fe);
        lib::L2CValue::L2CValue(aLStack96,true);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar4 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ArticleModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar4,(bool)(bVar1 & 1),
                   -1.0);
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

