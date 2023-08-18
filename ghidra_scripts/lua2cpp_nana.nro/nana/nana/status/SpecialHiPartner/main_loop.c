
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialHiPartner_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
LAB_7100019d18:
    iVar2 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_STATUS_SPECIAL_HI_PARTNER_FLAG_MOTION_GROUND)
      ;
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_STATUS_SPECIAL_HI_PARTNER_FLAG_MOTION_AIR);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_STATUS_SPECIAL_HI_PARTNER_FLAG_MOTION_AIR)
          ;
          iVar2 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::_L2CValue(aLStack80);
          HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,HVar4);
          lib::L2CValue::L2CValue(aLStack80,0xf38368121);
          uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x19dea9c97d);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,1.0);
            lib::L2CValue::L2CValue(aLStack128,false);
            HVar4 = lib::L2CValue::as_hash(aLStack80);
            fVar5 = (float)lib::L2CValue::as_number(aLStack96);
            fVar6 = (float)lib::L2CValue::as_number(aLStack112);
            bVar1 = lib::L2CValue::as_bool(aLStack128);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
            goto LAB_7100019cbc;
          }
          lib::L2CValue::L2CValue(aLStack80,0x19dea9c97d);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
          goto LAB_7100019cd4;
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_POPO_STATUS_SPECIAL_HI_PARTNER_FLAG_MOTION_GROUND);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,HVar4);
        lib::L2CValue::L2CValue(aLStack80,0x1333af0cf5);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x15d26da2a8);
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::L2CValue(aLStack112,1.0);
          lib::L2CValue::L2CValue(aLStack128,false);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          fVar5 = (float)lib::L2CValue::as_number(aLStack96);
          fVar6 = (float)lib::L2CValue::as_number(aLStack112);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
LAB_7100019cbc:
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x15d26da2a8);
          HVar4 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar4,-1.0,1.0,0.0,false,false);
        }
LAB_7100019cd4:
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack144,0);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019d18;
    }
    iVar2 = 1;
  }
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

