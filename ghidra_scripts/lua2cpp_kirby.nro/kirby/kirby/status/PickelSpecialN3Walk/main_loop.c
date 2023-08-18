
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3Walk_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CAgent *this_01;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    FUN_7100121720(this);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    HVar6 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,HVar6);
    lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_N3_FLAG_CONTINUAL_SPECIAL_N3);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0xaf5156bf9);
        FUN_7100121cb0(aLStack96,this,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710012c714:
            lib::L2CValue::_L2CValue(aLStack96);
            return;
          }
          lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_KIND_WALK);
          FUN_7100121de0(aLStack80,this);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack160,false);
          lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue(aLStack80);
            goto LAB_710012c714;
          }
          lib::L2CValue::L2CValue(aLStack144,aLStack80);
          FUN_71001220c0(this,aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        pLVar4 = aLStack96;
        goto LAB_710012c74c;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar4 = aLStack112;
LAB_710012c74c:
      lib::L2CValue::_L2CValue(pLVar4);
    }
    lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_KIND_WALK);
    FUN_7100122310(aLStack96,this,aLStack176);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) goto LAB_710012c804;
    FUN_7100123000(aLStack80,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) goto LAB_710012c804;
    FUN_710012c130(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_710012c804;
    pLVar4 = (L2CValue *)0x1a;
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(this_01,pLVar4);
    lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack208,0xcf44ba9e5);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar8);
      lib::L2CValue::operator_(pLVar4,aLStack192);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) == 0) {
        FUN_71001232d0(this);
        goto LAB_710012c804;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WAIT);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      fVar8 = (float)app::lua_bind::GroundModule__get_down_friction_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WAIT);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710012c804:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

