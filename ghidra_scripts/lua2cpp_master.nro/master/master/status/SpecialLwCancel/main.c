
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwCancel_main(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar5 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  fVar5 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (this->moduleAccessor,0x7fb997a80,true);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,0x11a669b894);
  lib::L2CValue::L2CValue(aLStack176,0x15d0344c8b);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack224,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack80,aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                             (this->moduleAccessor,0x7fb997a80,true);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator_(aLStack80,aLStack144);
    lib::L2CValue::operator_(aLStack272,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  fVar5 = (float)lib::L2CValue::as_number(aLStack272);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack288,0x1925c7e765);
  lib::L2CValue::L2CValue(aLStack304,0);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack288);
  uVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar4,uVar2);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialLwCancel_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

