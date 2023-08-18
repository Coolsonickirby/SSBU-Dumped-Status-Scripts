
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::FinalPartner_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_MOTION_GROUND);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_MOTION_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) goto LAB_7100017ab4;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_MOTION_AIR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,HVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb9a34d6d3);
    uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf9f32ea25);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),fVar8,(bool)(bVar2 & 1),
               false);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_MOTION_GROUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,HVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf9f32ea25);
    uVar4 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb9a34d6d3);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),fVar8,(bool)(bVar2 & 1),
               false);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100017ab4:
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_END);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_POPO_STATUS_FINAL_PARTNER_FLAG_END);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    FUN_7100006b20(this);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::L2CValue(aLStack128,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    lVar10 = lib::L2CValue::as_number(aLStack160);
    uVar9 = lib::L2CValue::as_number(aLStack176);
    local_60 = uVar4 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar9;
    app::lua_bind::ModelModule__set_joint_translate_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_60,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf9f32ea25);
    uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      bVar1 = app::lua_bind::GroundModule__attach_ground_impl(this->moduleAccessor,true);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack160,false);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      FUN_7100007040(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack192,false);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

