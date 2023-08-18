
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwLanding2_main(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  fVar6 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (this->moduleAccessor,0x7fb997a80,true);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0x1408002389);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack144);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    fVar6 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                             (this->moduleAccessor,0x7fb997a80,true);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  fVar6 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
  lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack160,0x1cb04bf599);
  lib::L2CValue::L2CValue(aLStack176,0);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack160);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar4,uVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialLwLanding2_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

