
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000255a0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar4);
  FUN_7100025740(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar5 = lib::L2CValue::operator==(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
    iVar2 = lib::L2CValue::as_integer(aLStack48);
    app::lua_bind::ArticleModule__remove_exist_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,0);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,true);
    bVar1 = lib::L2CValue::as_bool(aLStack48);
    app::lua_bind::ItemModule__set_change_status_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::L2CValue(aLStack48,0);
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_SHOOT_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack48);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  return;
}

