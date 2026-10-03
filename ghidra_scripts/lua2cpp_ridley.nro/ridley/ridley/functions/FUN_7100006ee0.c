
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006ee0(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DEAD);
  uVar4 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_DRAGF_DAMAGE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar2 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::CatchModule__set_send_cut_event_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
      app::lua_bind::CatchModule__catch_cut_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),false,false);
      goto LAB_71000070d0;
    }
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::CatchModule__set_send_cut_event_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue(aLStack64);
    app::lua_bind::CatchModule__catch_cut_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),false,false);
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue(aLStack80,0xe84bc5041);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue(aLStack80,0xbe571e151);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,0);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_71000070d0:
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar2 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::CatchModule__set_send_cut_event_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

