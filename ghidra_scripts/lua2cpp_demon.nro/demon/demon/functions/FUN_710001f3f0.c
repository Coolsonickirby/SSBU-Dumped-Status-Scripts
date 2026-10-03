
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f3f0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor **ppBVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DEAD);
  uVar4 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_FLAG_CAPTURE_CUT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    ppBVar6 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar6,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::CatchModule__set_send_cut_event_impl(*ppBVar6,(bool)(bVar1 & 1));
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,false);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::CatchModule__set_send_cut_event_impl(*ppBVar6,(bool)(bVar1 & 1));
    }
    lib::L2CValue::~L2CValue(aLStack64);
    app::lua_bind::CatchModule__catch_cut_impl(*ppBVar6,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_SPECIAL_LW_FLAG_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue(aLStack80,0xa5fbe21f9);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,HVar5,0);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  app::lua_bind::CameraModule__zoom_out_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
  bVar1 = app::lua_bind::FighterCutInManager__is_play_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::FighterCutInManager__request_end_impl(FIGHTER_STATUS_BOSS_DEAD_FLAG_FINISH);
  }
  return;
}

