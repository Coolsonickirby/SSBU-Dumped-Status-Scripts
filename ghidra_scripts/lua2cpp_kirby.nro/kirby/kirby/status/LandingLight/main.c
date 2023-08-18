
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::LandingLight_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack192,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_SONIC);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_PICKEL);
      uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        FUN_7100222770(aLStack112,this);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xdd934faa1);
          lib::L2CValue::L2CValue(aLStack112,-1.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CValue::L2CValue(aLStack176,true);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          bVar1 = lib::L2CValue::as_bool(aLStack160);
          bVar3 = lib::L2CValue::as_bool(aLStack176);
          app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                    (this->moduleAccessor,HVar6,fVar7,fVar8,fVar9,(bool)(bVar1 & 1),
                     (bool)(bVar3 & 1));
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,LandingLight_main_loop);
          lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        else {
          lua2cpp::L2CFighterCommon::status_LandingLight(this);
        }
        lib::L2CValue::_L2CValue(aLStack192);
        return;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_N_FALL);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lua2cpp::L2CFighterCommon::status_LandingLight(this);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

