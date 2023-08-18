
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::SpecialSAttack_main(L2CFighterKamui *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x10e4df374b);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) goto LAB_710000953c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    lib::L2CValue::L2CValue(aLStack96,0x10e4df374b);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar3,HVar4,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = aLStack96;
  }
  else {
    bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,0x14656ab80b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_710000953c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_SPEARHAND);
    lib::L2CValue::L2CValue(aLStack112,0x14656ab80b);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar3,HVar4,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = aLStack112;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000953c:
  lib::L2CValue::L2CValue(aLStack80,SpecialSAttack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

