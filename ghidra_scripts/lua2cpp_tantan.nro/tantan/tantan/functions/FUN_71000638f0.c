
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000638f0(L2CValue *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_APPEAL);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,false);
      lib::L2CValue::operator=(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack112,aLStack80);
    lib::L2CValue::L2CValue(aLStack128,aLStack96);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_NONE);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

