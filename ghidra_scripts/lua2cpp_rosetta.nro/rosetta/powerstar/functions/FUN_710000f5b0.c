
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f5b0(long param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_INT_SHOOT_START_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar3 = lib::L2CValue::operator<=(param_2,aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_INT_SHOOT_END_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    uVar3 = lib::L2CValue::operator<(aLStack96,param_2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_INT_SHOOT_INTERVAL);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::L2CValue(aLStack64,1);
    lib::L2CValue::operator-(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_POWERSTAR_GENERATE_ARTICLE_METEOR);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::ArticleModule__generate_article_enable_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,false,-1);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,0xf994e6f6f);
      lib::L2CValue::L2CValue(aLStack112,0x140707e4de);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,iVar1);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_INT_SHOOT_INTERVAL)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

