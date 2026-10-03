
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000206c0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CaptureModule__is_capture_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::LinkModule__is_link_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      uVar4 = app::lua_bind::LinkModule__get_parent_id_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,true);
      lib::L2CValue::L2CValue(aLStack64,uVar4);
      lib::L2CValue::L2CValue
                (aLStack112,
                 _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack64,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_HIT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
          lib::L2CValue::L2CValue(aLStack80,0x18f836a168);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          HVar6 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::LinkModule__send_event_parents_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar6);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
        }
        lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::LinkModule__unlink_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::LinkModule__is_linked_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
        lib::L2CValue::L2CValue(aLStack80,0x1465ed7a5c);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::LinkModule__send_event_nodes_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3,HVar6,0);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::LinkModule__is_link_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::LinkModule__unlink_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
          lib::L2CValue::~L2CValue(aLStack64);
        }
      }
      bVar2 = false;
      goto LAB_71000209e8;
    }
  }
  bVar2 = true;
LAB_71000209e8:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

