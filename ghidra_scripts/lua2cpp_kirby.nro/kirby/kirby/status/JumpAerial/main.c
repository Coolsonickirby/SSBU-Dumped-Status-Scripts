
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::JumpAerial_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
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
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_PICKEL);
    uVar4 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      FUN_7100222c50(aLStack112,this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,HVar5);
        lib::L2CValue::L2CValue(aLStack96,0x191f5b3aad);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xd0b71815b);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xd0c1c4542);
          lib::L2CValue::operator_(aLStack112,aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,-1.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,true);
        lib::L2CValue::L2CValue(aLStack176,true);
        HVar5 = lib::L2CValue::as_hash(aLStack112);
        fVar6 = (float)lib::L2CValue::as_number(aLStack96);
        fVar7 = (float)lib::L2CValue::as_number(aLStack128);
        fVar8 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar5,fVar6,fVar7,fVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1))
        ;
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack144,false);
          lua2cpp::L2CFighterCommon::sub_jump_aerial_uniq(this,(L2CValue)0x70);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
        lib::L2CValue::L2CValue(aLStack96,&DAT_7100222d30);
        lib::L2CValue::operator_(this_00,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack96,JumpAerial_main_loop);
        lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        lua2cpp::L2CFighterCommon::status_JumpAerial(this);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lua2cpp::L2CFighterCommon::status_JumpAerial(this);
  return;
}

