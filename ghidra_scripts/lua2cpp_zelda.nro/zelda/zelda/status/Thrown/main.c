
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterZelda::status::Thrown_main(L2CFighterZelda *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_THROWN_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x93adf54a2);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xe296f5e62);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100004348;
  }
  lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  uVar2 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar1,true);
  lib::L2CValue::L2CValue(aLStack96,uVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = app::sv_battle_object::category(uVar2);
  lib::L2CValue::L2CValue(aLStack112,uVar2 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    this_00 = aLStack112;
LAB_710000433c:
    lib::L2CValue::_L2CValue(this_00);
  }
  else {
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = app::sv_battle_object::kind(uVar2);
    lib::L2CValue::L2CValue(aLStack128,uVar2);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_ROBOT);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,PHYSICS_SWING_SPECIAL_STATE_BINDPOSE_SKIRT);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::PhysicsModule__set_swing_special_state_impl(this->moduleAccessor,iVar1);
      this_00 = aLStack64;
      goto LAB_710000433c;
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100004348:
  lua2cpp::L2CFighterCommon::status_Thrown(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

