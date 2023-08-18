
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialLwBatwithin_end
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),0xff);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_BAT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x4fb50df0c);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

