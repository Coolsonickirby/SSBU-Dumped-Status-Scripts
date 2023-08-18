
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::LandingAttackAir_init(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  long lVar5;
  ulong uVar6;
  L2CValue *this_00;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1a4bd4f964);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xd562c06c5);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    goto LAB_7100016220;
  }
  lib::L2CValue::L2CValue(aLStack96,0xd7484f6cf);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xd0383c659);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1a450f7156);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0xd58f78ef7);
        lib::L2CValue::operator_(aLStack144,aLStack96);
LAB_7100016220:
        this_00 = aLStack96;
        goto LAB_71000164d0;
      }
      lib::L2CValue::L2CValue(aLStack96,0xdbc5d7cc7);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xdcb5a4c51);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xdde67d935);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0x1b64c11828);
              lib::L2CValue::operator_(aLStack160,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,0xec50d73a9);
              lib::L2CValue::operator_(aLStack144,aLStack96);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0x1bfaa2e04f);
              lib::L2CValue::operator_(aLStack160,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,0xe5b6e8bce);
              lib::L2CValue::operator_(aLStack144,aLStack96);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x1a4262b54f);
            lib::L2CValue::operator_(aLStack160,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0xd5f9a4aee);
            lib::L2CValue::operator_(aLStack144,aLStack96);
          }
          goto LAB_7100016220;
        }
        lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x1bef9f752b);
        lib::L2CValue::operator_(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0xe4e531eaa);
        lib::L2CValue::operator_(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,0x1a450f7156);
        lib::L2CValue::L2CValue(aLStack224,0);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
        lib::L2CValue::L2CValue
                  (aLStack256,_FIGHTER_TRAIL_INSTANCE_WORK_ID_FLOAT_LANDING_ATTACK_AIR_FRAME_F);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar9);
        lib::L2CValue::operator_(aLStack192,aLStack240);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x1b989845bd);
        lib::L2CValue::operator_(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0xe39542e3c);
        lib::L2CValue::operator_(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,0x1a450f7156);
        lib::L2CValue::L2CValue(aLStack224,0);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
        lib::L2CValue::L2CValue
                  (aLStack256,_FIGHTER_TRAIL_INSTANCE_WORK_ID_FLOAT_LANDING_ATTACK_AIR_FRAME_F);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar9);
        lib::L2CValue::operator_(aLStack192,aLStack240);
        lib::L2CValue::operator_(aLStack128,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1b2746ff23);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xe868a94a2);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack208,0x1a4bd4f964);
      lib::L2CValue::L2CValue(aLStack224,0);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack192,fVar9);
      lib::L2CValue::L2CValue
                (aLStack256,_FIGHTER_TRAIL_INSTANCE_WORK_ID_FLOAT_LANDING_ATTACK_AIR_FRAME_N);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack240,fVar9);
      lib::L2CValue::operator_(aLStack192,aLStack240);
      lib::L2CValue::operator_(aLStack128,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1b5041cfb5);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xef18da434);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack208,0x1a4bd4f964);
    lib::L2CValue::L2CValue(aLStack224,0);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar9);
    lib::L2CValue::L2CValue
              (aLStack256,_FIGHTER_TRAIL_INSTANCE_WORK_ID_FLOAT_LANDING_ATTACK_AIR_FRAME_N);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::operator_(aLStack192,aLStack240);
    lib::L2CValue::operator_(aLStack128,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = aLStack208;
LAB_71000164d0:
  lib::L2CValue::_L2CValue(this_00);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack224,aLStack144);
    lib::L2CValue::L2CValue(aLStack240,aLStack192);
    lua2cpp::L2CFighterCommon::sub_get_landing_motion_rate(this,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack256,false);
  HVar8 = lib::L2CValue::as_hash(aLStack144);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack256);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_RUN_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_RUN_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_INSTANCE_WORK_ID_FLAG_ENABLE_LANDING_CLIFF_STOP);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_ENABLE_LANDING_CLIFF_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

