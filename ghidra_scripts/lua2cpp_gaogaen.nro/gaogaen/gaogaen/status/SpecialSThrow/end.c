
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::SpecialSThrow_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar6);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_SHOULDER);
  uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_LARIAT);
    uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_FAILURE);
      uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_S_END);
        uVar7 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack64,false);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAOGAEN_GENERATE_ARTICLE_ROPE);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_GAOGAEN_ROPE_STATUS_KIND_END);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4)
            ;
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
          }
          lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            uVar5 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
            lib::L2CValue::L2CValue(aLStack64,uVar5);
            lib::L2CValue::L2CValue
                      (aLStack128,
                       _FIGHTER_GAOGAEN_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SWING_THROWN_FIGHTER);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            uVar7 = lib::L2CValue::operator__(aLStack64,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue
                        (aLStack112,_FIGHTER_GAOGAEN_STATUS_SPECIAL_S_FLAG_THROW_ROPE_END);
              iVar3 = lib::L2CValue::as_integer(aLStack112);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue(aLStack64,false);
              uVar7 = lib::L2CValue::operator__(aLStack96,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
                lib::L2CValue::L2CValue(aLStack96,0x1465ed7a5c);
                iVar3 = lib::L2CValue::as_integer(aLStack64);
                HVar8 = lib::L2CValue::as_hash(aLStack96);
                app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar8)
                ;
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack64);
              }
              lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
              iVar3 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack64);
            }
          }
          lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
            lib::L2CValue::L2CValue(aLStack96,0x1465ed7a5c);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            HVar8 = lib::L2CValue::as_hash(aLStack96);
            app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar8,0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
              iVar3 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack64);
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

