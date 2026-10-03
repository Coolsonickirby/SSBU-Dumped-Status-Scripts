
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000eaa0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MARIO_PUMP_INSTANCE_WORK_ID_INT_WATER_SHOOT_NUM);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::L2CValue(aLStack112,0xa2a1583da);
    lib::L2CValue::L2CValue(aLStack128,0x9144bfeb4);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_MARIO_PUMP_INSTANCE_WORK_ID_INT_WATER_SPAN_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MARIO_PUMP_INSTANCE_WORK_ID_INT_WATER_SPAN_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_MARIO_PUMP_GENERATE_ARTICLE_WATER);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::ArticleModule__generate_article_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,false,-1);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack80,0xa2a1583da);
        lib::L2CValue::L2CValue(aLStack96,0xa479d7357);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack64,iVar2);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_MARIO_PUMP_INSTANCE_WORK_ID_INT_WATER_SPAN_FRAME)
        ;
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_MARIO_PUMP_INSTANCE_WORK_ID_INT_WATER_SHOOT_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__inc_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

