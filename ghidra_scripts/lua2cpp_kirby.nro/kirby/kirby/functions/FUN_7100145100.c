
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100145100(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar5);
  FUN_71001453a0(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::ItemModule__set_change_status_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_SHOOT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_HAT);
      lib::L2CValue::L2CValue(aLStack80,0xa6d30a4fc);
      lib::L2CValue::L2CValue(aLStack112,false);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar7 = lib::L2CValue::as_hash(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::ArticleModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar7,(bool)(bVar1 & 1),-1.0
                );
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  return;
}

