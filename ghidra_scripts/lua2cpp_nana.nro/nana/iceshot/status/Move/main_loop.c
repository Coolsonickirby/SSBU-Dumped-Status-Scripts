
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNanaIceshot::status::Move_main_loop(L2CWeaponNanaIceshot *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_INT_LIFE_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar7 = lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_FLAG_REMOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        this_00 = &this->globalTable;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::_L2CValue(aLStack112);
            goto LAB_71000290bc;
          }
        }
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) goto LAB_7100029930;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) != 0) goto LAB_71000290bc;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack112);
LAB_71000290bc:
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_DAMAGE_TO_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack96,false);
          uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar7 & 1) != 0) {
            bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
            lib::L2CValue::L2CValue(aLStack96,false);
            uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_GROUND_TO_AIR)
              ;
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
              lib::L2CValue::_L2CValue(aLStack96);
            }
          }
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_TYPE_POPO_ICESHOT_MOVE_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,0x2cf483fbd3);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,_EFFECT_HANDLE_NULL);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_GROUND_EFFECT_HANDLE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar6 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar6);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,false);
          bVar1 = lib::L2CValue::as_bool(aLStack128);
          app::lua_bind::StatusModule__set_keep_situation_air_impl(*ppBVar10,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_DAMAGE_TO_AIR);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
          pLVar8 = aLStack128;
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,0xdf4e9c2dc);
          lib::L2CValue::L2CValue(aLStack144,0xe23e65634);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          uVar9 = lib::L2CValue::as_integer(aLStack144);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
          lib::L2CValue::L2CValue(aLStack96,fVar11);
          lib::L2CValue::operator_(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_KINETIC_ENERGY_ID_GENERAL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          fVar11 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::_L2CValue(aLStack96);
          uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack144,_SITUATION_KIND_GROUND);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x70);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
            GVar4 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_POPO_ICESHOT_MOVE_GROUND);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0x2f73f63b7c);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack96);
            uVar5 = app::lua_bind::EffectModule__get_last_handle_impl(*ppBVar10);
            lib::L2CValue::L2CValue(aLStack176,uVar5);
            lib::L2CValue::L2CValue
                      (aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_GROUND_EFFECT_HANDLE);
            iVar3 = lib::L2CValue::as_integer(aLStack176);
            iVar6 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar6);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack192,fVar11);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack208,1.0);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            uVar7 = lib::L2CValue::operator_(aLStack192,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack96,-1.0);
              lib::L2CValue::operator_(aLStack208,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::operator_(aLStack208,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_GROUND_EFFECT_HANDLE_LR);
            fVar11 = (float)lib::L2CValue::as_number(aLStack224);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_GROUND_TO_AIR);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_TO_AIR_HOP);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_DAMAGE_TO_AIR);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue
                      (aLStack224,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_FLOAT_ROT_DEGREE);
            fVar11 = (float)lib::L2CValue::as_number(aLStack96);
            iVar3 = lib::L2CValue::as_integer(aLStack224);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack192);
            pLVar8 = aLStack176;
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,0xdf4e9c2dc);
            lib::L2CValue::L2CValue(aLStack160,0xb0d756857);
            uVar7 = lib::L2CValue::as_integer(aLStack144);
            uVar9 = lib::L2CValue::as_integer(aLStack160);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
            lib::L2CValue::L2CValue(aLStack96,fVar11);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_POPO_ICESHOT_KINETIC_ENERGY_ID_GENERAL);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            fVar11 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
            lib::L2CValue::L2CValue(aLStack144,fVar11);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack160,_WEAPON_POPO_ICESHOT_KINETIC_ENERGY_ID_GENERAL);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
            GVar4 = lib::L2CValue::as_integer(aLStack176);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar4);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack144);
            pLVar8 = aLStack96;
          }
          lib::L2CValue::_L2CValue(pLVar8);
          lib::L2CValue::_L2CValue(aLStack128);
LAB_7100029930:
          pLVar8 = aLStack112;
        }
        lib::L2CValue::_L2CValue(pLVar8);
      }
      iVar3 = 0;
      goto LAB_7100029940;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_POPO_ICESHOT_STATUS_KIND_REMOVE);
  lib::L2CValue::L2CValue(aLStack112,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar3 = 1;
LAB_7100029940:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

