
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007c40(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  bool bVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_RESERVE_SUMMON_DISPATCH);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_INSTANCE_WORK_ID_INT_CUSTOMIZE_TO);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      bVar5 = false;
      goto LAB_7100007dd4;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_INSTANCE_WORK_ID_INT_SPECIAL_KIND_CUSTOMIZE);
  iVar2 = lib::L2CValue::as_integer(this);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_JACK_STATUS_KIND_SPECIAL_CUSTOMIZE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar5 = true;
LAB_7100007dd4:
  lib::L2CValue::L2CValue(param_1,bVar5);
  return;
}

