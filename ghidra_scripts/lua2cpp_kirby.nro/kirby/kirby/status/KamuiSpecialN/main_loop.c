
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KamuiSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_END_HOLD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_END_HOLD);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N_HOLD);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_KAMUI_SPECIAL_N_SHOOT);
        lib::L2CValue::operator_(aLStack112,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,aLStack112);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710017b268;
    }
  }
  lib::L2CValue::L2CValue(aLStack144,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack176,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack224,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack240,GROUND_CORRECT_KIND_AIR);
  FUN_7100177570(aLStack128,this,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,aLStack224,
                 aLStack240);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x1331f32137);
            lib::L2CValue::L2CValue(aLStack272,true);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0xf3a6aace3);
            lib::L2CValue::L2CValue(aLStack272,true);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x15e490ff8e);
            lib::L2CValue::L2CValue(aLStack272,true);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x1192cd0b91);
            lib::L2CValue::L2CValue(aLStack272,true);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      else {
        fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x1331f32137);
            lib::L2CValue::L2CValue(aLStack272,false);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0xf3a6aace3);
            lib::L2CValue::L2CValue(aLStack272,false);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x15e490ff8e);
            lib::L2CValue::L2CValue(aLStack272,false);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_GENERATE_ARTICLE_DRAGONHAND);
            lib::L2CValue::L2CValue(aLStack256,0x1192cd0b91);
            lib::L2CValue::L2CValue(aLStack272,false);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            HVar6 = lib::L2CValue::as_hash(aLStack256);
            bVar1 = lib::L2CValue::as_bool(aLStack272);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
          }
        }
      }
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710017b268:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

