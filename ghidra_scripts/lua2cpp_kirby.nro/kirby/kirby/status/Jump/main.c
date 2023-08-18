
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Jump_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  float fVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_PICKEL);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      FUN_7100222da0(aLStack112,this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,HVar7);
        lib::L2CValue::L2CValue(aLStack96,0x17f0bb63e4);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x12e6fa5ece);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0x176b2a21f2);
            uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,0x62dd02058);
              lib::L2CValue::operator_(aLStack112,aLStack96);
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,0xb38c9ab48);
              lib::L2CValue::operator_(aLStack112,aLStack96);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0x62abde441);
            lib::L2CValue::operator_(aLStack112,aLStack96);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xba358e95e);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,true);
        lib::L2CValue::L2CValue(aLStack176,true);
        HVar7 = lib::L2CValue::as_hash(aLStack112);
        fVar8 = (float)lib::L2CValue::as_number(aLStack96);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1)
                  );
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterCommon::sub_fall_common_uniq(this,(L2CValue)0x70);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
        lib::L2CValue::L2CValue(aLStack96,&DAT_7100222bd0);
        lib::L2CValue::operator_(this_00,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,Jump_main_loop);
        lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_ID_FLAG_RESERVE_JUMP_MINI);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack128,0xf9b69867e);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar6 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_MINI_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lua2cpp::L2CFighterCommon::status_Jump(this);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lua2cpp::L2CFighterCommon::status_Jump(this);
  return;
}

